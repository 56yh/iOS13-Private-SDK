//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MFCardAction : NSObject
{
    _Bool _handlerEnabled;
    _Bool _shouldDismissCardBeforeExecuteHandler;
    NSString *_imageName;
    UIColor *_tintColor;
    NSString *_title;
    id /* block */ _handler;
}

+ (id)cardActionWithTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handlerEnabled:(_Bool)arg4 handler:(id /* block */)arg5;
+ (id)cardActionWithTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handler:(id /* block */)arg4;
@property(nonatomic) _Bool shouldDismissCardBeforeExecuteHandler; // @synthesize shouldDismissCardBeforeExecuteHandler=_shouldDismissCardBeforeExecuteHandler;
@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool handlerEnabled; // @synthesize handlerEnabled=_handlerEnabled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)executeHandler;
- (void)executeHandlerIfEnabled;

@end

