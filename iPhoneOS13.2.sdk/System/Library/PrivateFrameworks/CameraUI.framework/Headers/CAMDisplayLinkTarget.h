//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMDisplayLinkTarget : NSObject
{
    id /* block */ _handler;
}

@property(readonly, copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
- (void)displayLinkDidFire:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;

@end

