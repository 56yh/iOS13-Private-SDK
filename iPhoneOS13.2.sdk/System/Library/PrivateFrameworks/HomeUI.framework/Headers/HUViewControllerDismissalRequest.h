//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject
{
    _Bool _animated;
    UIViewController *_viewController;
}

+ (id)requestWithViewController:(id)arg1;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithViewController:(id)arg1;

@end

