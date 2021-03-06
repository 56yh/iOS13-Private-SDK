//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TUCallGroup : NSObject
{
    NSArray *_calls;
}

@property(readonly, copy, nonatomic) NSArray *calls; // @synthesize calls=_calls;
// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) int status;
@property(readonly, copy, nonatomic) NSString *displayName;
- (NSUInteger)hash;
- (BOOL)isEqualToCallGroup:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCall:(id)arg1;
- (id)initWithCalls:(id)arg1;

@end

