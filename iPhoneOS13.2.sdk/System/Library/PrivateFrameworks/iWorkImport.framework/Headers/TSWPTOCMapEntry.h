//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPTOCEntryStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCMapEntry : NSObject
{
    _Bool _showInTOC;
    TSWPTOCEntryStyle *_tocEntryStyle;
}

@property(nonatomic) _Bool showInTOC; // @synthesize showInTOC=_showInTOC;
@property(retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // @synthesize tocEntryStyle=_tocEntryStyle;
- (id)copyWithContext:(id)arg1;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(_Bool)arg2;

@end

