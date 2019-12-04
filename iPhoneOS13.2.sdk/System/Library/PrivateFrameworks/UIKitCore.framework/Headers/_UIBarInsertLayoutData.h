//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarInsertLayoutData : NSObject <NSCopying>
{
    _Bool _collapsible;
    _Bool _prefersExpanded;
    _Bool _ignoredForCollapsingBehaviors;
    _Bool _active;
    NSString *_identifier;
    double _minimumHeight;
    double _preferredHeight;
    double _assignedHeight;
    double _collapsingHeight;
    long long _priority;
    long long _order;
}

+ (CDStruct_39925896)calculateLayoutHeights:(id)arg1;
+ (id)calculateRestingHeightsForLayouts:(id)arg1;
+ (void)updateLayoutParameters:(id)arg1 overflowLayout:(id)arg2 forAvailableHeight:(double)arg3;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool ignoredForCollapsingBehaviors; // @synthesize ignoredForCollapsingBehaviors=_ignoredForCollapsingBehaviors;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double collapsingHeight; // @synthesize collapsingHeight=_collapsingHeight;
@property(readonly, nonatomic) double assignedHeight; // @synthesize assignedHeight=_assignedHeight;
@property(nonatomic) _Bool prefersExpanded; // @synthesize prefersExpanded=_prefersExpanded;
@property(nonatomic, getter=isCollapsible) _Bool collapsible; // @synthesize collapsible=_collapsible;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isVariableHeight) _Bool variableHeight;
@property(readonly, nonatomic) double layoutMinimumHeight;
- (void)setFixedHeight:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

