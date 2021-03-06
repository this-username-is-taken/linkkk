//
//  UIButton+Linkkk.h
//  Linkkk
//
//  Created by Vincent Wen on 5/11/13.
//  Copyright (c) 2013 Linkkk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Linkkk)

- (void)setTitle:(NSString *)title;
- (void)setTitleColor:(UIColor *)color;
- (void)setTitleFont:(UIFont *)font;
- (void)setTitleWithString:(NSString *)string;
- (void)setImage:(UIImage *)image;
- (UIImage *)image;

@end
