//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFLinkHandler : NSObject
{
    UIButton *_button;
    id /* block */ _handler;
}

@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)buttonPressed:(id)arg1;
- (id)init;

@end

