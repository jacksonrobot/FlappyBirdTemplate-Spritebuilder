//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
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
    CCNode *_ground1;
    CCNode *_ground2;
    NSArray *_grounds;
    CCNode *_cloud1;
    CCNode *_cloud2;
    NSArray *_clouds;
    
    CCNode *_bush1;
    CCNode *_bush2;
    NSArray *_bushes;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
