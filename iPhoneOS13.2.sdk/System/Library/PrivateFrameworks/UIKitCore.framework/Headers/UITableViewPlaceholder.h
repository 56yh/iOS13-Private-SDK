//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject
{
    id /* block */ _cellUpdateHandler;
    NSIndexPath *_insertionIndexPath;
    NSString *_reuseIdentifier;
    double _rowHeight;
}

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSIndexPath *insertionIndexPath; // @synthesize insertionIndexPath=_insertionIndexPath;
@property(copy, nonatomic) id /* block */ cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3;

@end

