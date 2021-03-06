//
//  UIView+Popup.h
//  CZPopupController
//
//  Created by zhangxuming on 16/4/25.
//  Copyright © 2016年 zhangxuming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CZPopupDefine.h"

@interface UIView (Popup)

- (void)displayPopup;

- (void)displayPopupWithLevel:(PopupLevel)level;

- (void)displayPopupWithLevel:(PopupLevel)level completion:(nullable PopupCompletionBlock)completion;

- (void)displayPopupWithLevel:(PopupLevel)level
                     interval:(NSTimeInterval)interval
                   completion:(nullable PopupCompletionBlock)completion;

- (void)dismissPopup;

@end
