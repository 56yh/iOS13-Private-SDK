//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMicrodataItemScope.h>

@class NSArray, NSMutableArray, NSSet;

@interface SGMicrodataItem : SGMicrodataItemScope
{
    NSMutableArray *_itemRef;
    NSSet *_itemType;
}

@property(readonly, nonatomic) NSArray *itemRef; // @synthesize itemRef=_itemRef;
@property(readonly, nonatomic) NSSet *itemType; // @synthesize itemType=_itemType;
- (id)initWithItemType:(id)arg1 itemRef:(id)arg2;
- (void)resolveItemRefsWithDocument:(id)arg1;

@end

