//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EMFakeRepositoryValidityTracker : NSObject
{
    NSMutableArray *_expectedChangeActionValidationBlocks;
}

- (void)verifyExpectations;
- (void)failWithReason:(id)arg1;
- (void)validateChangeAction:(id)arg1;
- (void)expectChangeActionWithValidationBlock:(id /* block */)arg1;

@end

