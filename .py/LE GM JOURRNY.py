# 릅gm의 혜안 미추었다 2라딱 가짜 재능들의 스몰3를 무시하고 릅갈의 길을 걸으시는 ㅇㅅㄹㅅ
# 워낙영 이릅플진   
# 업데이트 후보 1. 라우리 2. 캠바 워커 3. THE BASKETBALL 4. 슈뢰더  <-- 이새끼나 딘위디나 근데 슈뢰더가 좋다고 생각함 
# 

import pygame
import os
import math



from pygame.constants import GL_MULTISAMPLEBUFFERS


#집게 부분 
class Claw(pygame.sprite.Sprite):
    def __init__(self, image, position):
        super().__init__()
        self.image = image
        self.rect = image.get_rect(center=position)
        self.original_image = image
        self.offset = pygame.math.Vector2(default_offset_x_claw, 0)
        self.position = position
    
        self.direction = LEFT 
        self.angle_speed = 2.5 #이속
        self.angle = 10 #최초 각도 정의 
        
    
    def update(self, to_x):
        if self.direction == LEFT: #왼쪽으로 가즈아~
            self.angle += self.angle_speed #이속 만큼 앵글 증가
        elif self.direction == RIGHT:
            self.angle -= self.angle_speed



        # 각도 최대 최서 범위 조정 
        if self.angle > 170:
            self.angle = 170
            self.set_direction(RIGHT)
        elif self.angle < 10:
            self.angle = 10
            self.set_direction(LEFT)

        self.offset.x += to_x 
        self.rotate() #회전 



      
    def rotate(self):
        self.image = pygame.transform.rotozoom(self.original_image, -self.angle, 1) #회전 대상,각도,사이즈
        offset_rotated = self.offset.rotate(self.angle)
        self.rect = self.image.get_rect(center=self.position+offset_rotated)    
        
        
        
            




    def set_direction(self, direction):
       self.direction = direction

   
   
    def draw(self, screen):
        screen.blit(self.image, self.rect)
        
        pygame.draw.line(screen, Black, self.position, self.rect.center, 5)#직선 그리기

    def set_init_state(self):
        self.offset.x = default_offset_x_claw
        self.angle = 10
        self.direction = LEFT
    
#음악   
#pygame.init()
#pygame.mixer.init()
#pygame.mixer.music.load('BN.mp3')
#pygame.mixer.music.play(1) 
#pygame.mixer.music.set_volume(0.1)
#pygame.mixer.music.queue('LNCL.mp3')

#릅신의 조각

#보석    
class Gemstone(pygame.sprite.Sprite):
    def __init__(self, image, postition,price,speed):
        super().__init__()
        self.image = image
        self.rect = image.get_rect(center=postition)
        self.price = price
        self.speed = speed

    def set_position(self, position, angle):
        r = self.rect.size[0] // 2 #동그라미 이미지 기준
        rad_angle = math.radians(angle) #각도
        to_x = r * math.cos(rad_angle) #삼각형 밑변
        to_y = r * math.sin(rad_angle) #삼각형 높이 (zcxxxxqs)  <-- ? 이거 뭐임

        self.rect.center = (position[0] + to_x, position[1]+ to_y)
        





#gemstone_group small godl = 던로 stone = 슈뢰더 diamond = 카와이 big_gold = CP3 opal = 쿰보 curry = 커리 FMVP=295$  역시 버럭신 ㅇㅅㅂㄹㅅ = brick 
def setup_gemstone():
    small_gold_price, small_gold_speed = 100,5
    big_gold_price,big_gold_speed = 300,2   
    stone_price,stone_speed = -10,2
    diamond_price,diamond_speed = 600,7
    opal_price,opal_speed = 300,8
    Fmvp_price,Fmvp_speed = -300,10
    curry_price,curry_speed = 700,10
    Westbrook_price,brick_speed = -1000,30
 
    small_gold = Gemstone(gemstone_images[0], (900, 400),small_gold_price, small_gold_speed)
    gemstone_group.add(small_gold)   
    gemstone_group.add(Gemstone(gemstone_images[1], (400, 600),big_gold_price,big_gold_speed))    
    gemstone_group.add(Gemstone(gemstone_images[2], (300, 380),stone_price,stone_speed))
    gemstone_group.add(Gemstone(gemstone_images[3], (1100, 620),diamond_price,diamond_speed))
    gemstone_group.add(Gemstone(gemstone_images[4], (100, 600),opal_price,opal_speed))
    gemstone_group.add(Gemstone(gemstone_images[5], (800, 500),Fmvp_price,Fmvp_speed))
    gemstone_group.add(Gemstone(gemstone_images[6], (500, 400),curry_price,curry_speed))
    gemstone_group.add(Gemstone(gemstone_images[7], (600, 350),Westbrook_price,brick_speed))
        


def update_score(score):
    global curr_score

    curr_score += score
def display_score():
    txt_curr_score = game_font.render(f"Curr Score : {curr_score}", True,White)
    screen.blit(txt_curr_score, (50, 50))

    txt_goal_score = game_font.render(f"Goal score : {goal_score}",True,White)
    screen.blit(txt_goal_score, (50, 80))

def display_time(time):
    txt_timer = game_font.render(f"Time : {time}", True , Black)
    screen.blit(txt_timer, (1100, 50))

def display_game_over():
    game_font = pygame.font.SysFont("arialrunded", 60) # 큰 폰트
    txt_game_over = game_font.render(game_result, True, Black)
    rect_game_over = txt_game_over.get_rect(center=(int(screen_width / 2), int(screen_height / 2))) # 화면 중앙에 표시
    screen.blit(txt_game_over, rect_game_over)
    

pygame.init()
screen_width = 1280
screen_height = 720 
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("릅  GM")
clock = pygame.time.Clock()
game_font = pygame.font.SysFont("arialrounded",30)

#목표 점수
goal_score = 1300
curr_score = 0 

#게임 오버 관련 
gaem_result = None
total_time = 50


start_ticks = pygame.time.get_ticks() #시간 받아오기


#겜 관련 변수
default_offset_x_claw = 40 #중심점으로부터 집게 위치임
to_x = 0  
caught_gemstone = None

#속도 

move_speed = 12 #발사 속도
return_speed =20 #돌아오는 속도 못잡았을때
#방향
STOP = 0 #고정    
LEFT = -1 #왼쪽 
RIGHT = 1 #오른쪽

#색깔
RED = (255,0,0) #이거 RGB값임 
Black = (0,0,0) 
White = (255,255,255)

#배경 이미지
current_path = os.path.dirname(__file__) 
background = pygame.image.load(os.path.join(current_path, "background.png"))

#보석 종류
gemstone_images = [
    pygame.image.load(os.path.join(current_path, "small_gold.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "big_gold.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "stone.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "diamond.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "opal.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "Fmvp.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path, "curry.png")).convert_alpha(),
    pygame.image.load(os.path.join(current_path,"brick.png")).convert_alpha()
    
    
    ]                                                                            


# 보석 그룹
gemstone_group = pygame.sprite.Group()
setup_gemstone() #보석을 정의 안에 다가 보석(?) 을 넣는건데 EX) 릅신의 탄처리,릅신의 부족한 수비를 채울 조각들

#집게 위치 지정 
claw_image = pygame.image.load(os.path.join(current_path, "claw.png")).convert_alpha()
claw = Claw(claw_image,(screen_width // 2 , 110)) # x는 절반 y는 꼴리는데로



#기타

running = True
while running:
    clock.tick(60) #FPS값 고정 
                

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        

        if event.type == pygame.MOUSEBUTTONDOWN: #마우스 좌클릭 움직임
            claw.set_direction(STOP)  #집게 ? 클로우가 멈추는 방법 
            to_x = move_speed 
    
    if claw.rect.left < 0 or claw.rect.right > screen_width or claw.rect.bottom > screen_height:
        to_x = -return_speed

    if claw.offset.x < default_offset_x_claw: #원위치 오면 다시 돌아감 지정 x축을 따라서 
        to_x = 0  
        claw.set_init_state()

        if caught_gemstone:
            update_score(caught_gemstone.price)
            gemstone_group.remove(caught_gemstone)
            caught_gemstone = None
    
    
    
    if not caught_gemstone: # 만약 클로우가 잡기를 못했을 경우
        for gemstone in gemstone_group:
          #  if claw.rect.colliderect(gemstone.rect):
            if pygame.sprite.collide_mask(claw,gemstone): #투명 제외하고 처 끌고옴 사진의 빈공간 투명한 부분은 잡을 수가 없다    
                caught_gemstone = gemstone #잡힌 거 정보(점수)
                to_x = -gemstone.speed #잡힌거 속도 설정(딸려오는 속도)
                break

    if caught_gemstone:
        caught_gemstone.set_position(claw.rect.center, claw.angle)
                
    screen.blit(background, (0, 0))
    
    gemstone_group.draw(screen) #그룹 내 모든 스프라이트 그림 
    claw.update(to_x)
    claw.draw(screen)


    display_score()
    
      
    elapsed_time = (pygame.time.get_ticks() - start_ticks) / 2000 # ms -> s ex(1000ms -> 1s)
    display_time(total_time - int(elapsed_time)) # 시간 표시 
    
    if total_time - int(elapsed_time) <= 0:
        running = False
        if curr_score >= goal_score:
            
            


            game_result = "Lebron is happy with your result"
                  
      
        else:
            game_result = "Lebron take away your GM power /P le gm doesn`t have any patience "
            display_game_over()
        
    



    pygame.display.update()



pygame.time.delay(4000)   #종료후 꺼지는데 걸리는 시간  1000ms --->1s

pygame.quit()
