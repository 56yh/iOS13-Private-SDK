//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClientRequest : NSObject
{
    NSInvocation *_invocation;
    unsigned long long _errorCount;
}

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(_Bool)arg2;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) NSInvocation *invocation;
- (id)initWithInvocation:(id)arg1;
- (void)dealloc;

@end

