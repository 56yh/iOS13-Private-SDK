//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCImageAttributeRules : NSObject
{
    NSMutableDictionary *_imageAttributeRules;
}

@property(retain, nonatomic) NSMutableDictionary *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
- (void)interfaceKey:(id *)arg1 forInterface:(int)arg2 directionKey:(id *)arg3 forDirection:(int)arg4;
- (void)swapSendAndReceiveRules;
- (id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2;
- (void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7;
- (id)description;
- (void)dealloc;
- (id)init;

@end

