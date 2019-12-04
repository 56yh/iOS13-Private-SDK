//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIWebElementAction : NSObject
{
    NSString *_title;
    id /* block */ _actionHandler;
    id /* block */ _dismissalHandler;
    int _type;
}

+ (id)standardElementActionWithType:(int)arg1;
+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3;
+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(id /* block */)arg2;
@property(copy, nonatomic) id /* block */ dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint)arg4;
- (id)_title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 actionHandler:(id /* block */)arg2 type:(int)arg3;

@end

