//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface AKAbsintheSigner : NSObject
{
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;
// - (void).cxx_destruct;
- (void)signatureForURLRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)signatureForURLRequest:(id)arg1;

@end

