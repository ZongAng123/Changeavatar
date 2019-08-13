//
//  ViewController.h
//  Change avatar
//
//  Created by ios  on 2019/8/13.
//  Copyright © 2019 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>

//获取系统版本号
#define IS_iOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 ? YES : NO)
//获取屏幕尺寸
#define SW [UIScreen mainScreen].bounds.size.width
#define SH [UIScreen mainScreen].bounds.size.height

@interface ViewController : UIViewController

@property (nonatomic, strong)UIButton *iconBtn;

@end

