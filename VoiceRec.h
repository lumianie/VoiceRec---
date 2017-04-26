//
//  VoiceRec.h
//  test
//
//  Created by E&P on 2017/4/25.
//  Copyright © 2017年 easipass. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "iflyMSC/iflyMSC.h"
typedef void(^block)(NSString *string);
@interface VoiceRec : NSObject<IFlyRecognizerViewDelegate>
@property (nonatomic, strong) IFlyRecognizerView *iflyRecognizerView;//带界面的识别对象
@property (nonatomic, strong) block callBack;

- (void)getMessage:(block)callBack;
- (void)startRecWithView:(UIView *)view;
@end
