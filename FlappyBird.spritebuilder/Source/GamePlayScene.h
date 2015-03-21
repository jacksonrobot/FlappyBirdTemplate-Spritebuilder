//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {   //枚举了一种NSInteger 这种类型的一个变量教DrawingOrder
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here;
    Character* character;
    CCPhysicsNode* physicsNode;
    float timeSinceObstacle;

}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
