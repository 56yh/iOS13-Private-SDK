//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStoryboardSegueTemplate.h>

__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate
{
    _Bool _useDefaultModalPresentationStyle;
    _Bool _useDefaultModalTransitionStyle;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
}

@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) _Bool useDefaultModalTransitionStyle; // @synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle;
@property(nonatomic) _Bool useDefaultModalPresentationStyle; // @synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

