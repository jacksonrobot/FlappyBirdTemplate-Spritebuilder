//
//  Character.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Character : CCSprite

-(void) flap;

@end
// 首先在character这个类中定义了flap这个动作。他是一个Node 下的Sprite