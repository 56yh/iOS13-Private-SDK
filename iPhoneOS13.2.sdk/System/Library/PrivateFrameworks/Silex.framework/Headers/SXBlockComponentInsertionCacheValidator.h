//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionCacheValidator-Protocol.h>

@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator>
{
    id /* block */ _block;
}

+ (id)validatorWithBlock:(id /* block */)arg1;
@property(readonly, nonatomic) id /* block */ block; // @synthesize block=_block;
- (_Bool)validateCache:(id)arg1 DOMObjectProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

