//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface CUTAsyncReducerState : NSObject
{
    NSArray *_visitedItems;
    NSArray *_pendingItems;
    id _currentItem;
    CUTResult *_currentResult;
    id /* block */ _cancelBlock;
    id /* block */ _continueBlock;
    id /* block */ _stopBlock;
}

@property(copy, nonatomic) id /* block */ stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) id /* block */ continueBlock; // @synthesize continueBlock=_continueBlock;
@property(copy, nonatomic) id /* block */ cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) CUTResult *currentResult; // @synthesize currentResult=_currentResult;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) NSArray *visitedItems; // @synthesize visitedItems=_visitedItems;
- (void)stopWithResult:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)continueWithResult:(id)arg1;

@end

