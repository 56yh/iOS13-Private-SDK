//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PSITableDelegate;

@interface PSITable : NSObject
{
    BOOL _finalizzeWasCalled;
    id <PSITableDelegate> _delegate;
}

@property(readonly) __weak id <PSITableDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)clear;
- (void)finalizze;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3;

@end
