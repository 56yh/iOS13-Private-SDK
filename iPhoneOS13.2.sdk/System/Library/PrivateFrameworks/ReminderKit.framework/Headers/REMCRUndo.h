//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface REMCRUndo : NSObject
{
    NSArray *_undoBlocks;
}

@property(readonly, nonatomic) NSArray *undoBlocks; // @synthesize undoBlocks=_undoBlocks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUndoBlocks:(id)arg1;
- (id)init;

@end

