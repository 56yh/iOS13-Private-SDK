//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedNodeContext-Protocol.h>

@class EBReaderSheetState, NSString;

__attribute__((visibility("hidden")))
@interface EBSheetContext : NSObject <OCDDelayedNodeContext>
{
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

