//
//  UIBarButtonItem+Linkkk.h
//  Linkkk
//
//  Created by Vincent Wen on 4/26/13.
//  Copyright (c) 2013 Linkkk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Linkkk)

+ (UIBarButtonItem *)customBackButtonWithTarget:(id)target action:(SEL)action;
+ (UIBarButtonItem *)customButtonWithIcon:(NSString *)icon Target:(id)target action:(SEL)action;
+ (UIBarButtonItem *)customButtonWithName:(NSString *)name target:(id)target action:(SEL)action;
+ (UILabel *)customTitleLabelWithString:(NSString *)title;

@end
