//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDialogButton : NSObject
{
    id /* block */ _handler;
    long long _style;
    NSString *_title;
}

+ (id)buttonWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

@end

