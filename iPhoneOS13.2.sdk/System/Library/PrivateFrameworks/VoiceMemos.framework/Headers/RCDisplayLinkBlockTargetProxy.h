//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

__attribute__((visibility("hidden")))
@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy
{
    id /* block */ _handlerBlock;
}

@property(readonly, copy, nonatomic) id /* block */ handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithHandlerBlock:(id /* block */)arg1;

@end

