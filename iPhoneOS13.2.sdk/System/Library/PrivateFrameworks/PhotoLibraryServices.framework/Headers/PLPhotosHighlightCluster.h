//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString, PLDateRangeTitleGenerator;
@protocol NSCopying;

@interface PLPhotosHighlightCluster : NSObject
{
    _Bool _isCurated;
    unsigned short _type;
    unsigned short _category;
    unsigned short _kind;
    int _startTimeZoneOffset;
    int _endTimeZoneOffset;
    NSSet *_moments;
    NSSet *_assets;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
    NSObject<NSCopying> *_objectID;
}

@property(readonly, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // @synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int endTimeZoneOffset; // @synthesize endTimeZoneOffset=_endTimeZoneOffset;
@property(nonatomic) int startTimeZoneOffset; // @synthesize startTimeZoneOffset=_startTimeZoneOffset;
@property(nonatomic) unsigned short kind; // @synthesize kind=_kind;
@property(nonatomic) unsigned short category; // @synthesize category=_category;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(nonatomic) _Bool isCurated; // @synthesize isCurated=_isCurated;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSSet *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSSet *moments; // @synthesize moments=_moments;
- (void)_calculatePropertyValues;
- (void)setMoments:(id)arg1;
- (id)initWithMoments:(id)arg1 dateRangeTitleGenerator:(id)arg2;

@end

