//
//  Character.m
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Character.h"
#import "GamePlayScene.h"

@implementation Character
// 通过didloadfromccb这个方法获得character的进入点
- (void)didLoadFromCCB
{
    self.position = ccp(50, 250);
    self.zOrder = DrawingOrderHero;
    self.physicsBody.collisionType = @"character";

}

- (void)flap
{
    [self.physicsBody applyImpulse:ccp(0, 400.f)];//给自身一个物理体一个刚体的速度叠加
}

@end
