//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject
{
    NSMutableSet *_moments;
    NSMutableSet *_dayHighlights;
    NSMutableSet *_dayGroupHighlights;
}

@property(readonly, nonatomic) NSMutableSet *dayGroupHighlights; // @synthesize dayGroupHighlights=_dayGroupHighlights;
@property(readonly, nonatomic) NSMutableSet *dayHighlights; // @synthesize dayHighlights=_dayHighlights;
@property(readonly, nonatomic) NSMutableSet *moments; // @synthesize moments=_moments;
- (void)addDayGroupHighlight:(id)arg1;
- (void)_addDayHighlight:(id)arg1;
- (void)addDayHighlight:(id)arg1;
- (void)_addMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (id)init;

@end

