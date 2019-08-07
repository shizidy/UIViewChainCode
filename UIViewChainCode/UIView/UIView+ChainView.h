//
//  UIView+ChainView.h
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 返回UIView对象的block

 @param view view
 */
typedef void(^ViewReturn)(UIView *view);
/**
 设置frame的block

 @param originX X
 @param originY Y
 @param width width
 @param height height
 @return UIView对象
 */
typedef UIView *_Nonnull(^ViewFrame)(CGFloat originX, CGFloat originY, CGFloat width, CGFloat height);
/**
 设置center的block

 @param pointX center.x
 @param pointY center.y
 @return UIView对象
 */
typedef UIView *_Nonnull(^ViewCenter)(CGFloat pointX, CGFloat pointY);
/**
 设置背景色

 @param color color
 @return UIView对象
 */
typedef UIView * _Nonnull(^ViewBackgroundColor)(UIColor *color);
/**
 设置layerRadius

 @param radius cornerRadius
 @param maskToBounds maskToBounds
 @return UIView对象
 */
typedef UIView * _Nonnull(^ViewLayerRadius)(CGFloat radius, BOOL maskToBounds);
/**
 设置layerBorder

 @param width borderWidth
 @param color borderColor
 @return UIView对象
 */
typedef UIView * _Nonnull(^ViewLayerBorder)(CGFloat width, UIColor *color);

@interface UIView (ChainView)
/**
 创建view

 @param block viewReturn
 @return UIView对象
 */
+ (instancetype)createView:(ViewReturn)block;
/**
 设置frame

 @return FrameReturn
 */
- (ViewFrame)viewFrame;
/**
 设置center

 @return PointReturn
 */
- (ViewCenter)viewCenter;
/**
 设置BackgroundColor

 @return BackgroundColorReturn
 */
- (ViewBackgroundColor)viewBackgroundColor;
/**
 设置layerRadius

 @return layerRadiusReturn
 */
- (ViewLayerRadius)viewLayerRadius;
/**
 设置layerBorder

 @return layerBorderReturn
 */
- (ViewLayerBorder)viewLayerBorder;
@end

NS_ASSUME_NONNULL_END
