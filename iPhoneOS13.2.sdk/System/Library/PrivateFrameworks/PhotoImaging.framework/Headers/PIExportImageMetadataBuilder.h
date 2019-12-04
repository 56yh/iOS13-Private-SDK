//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSDictionary, NSMutableDictionary;

@interface PIExportImageMetadataBuilder : PIExportMetadataBuilder
{
    NSMutableDictionary *_iptcMutableDictionary;
}

+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)_dateFormatterTemplate;
+ (id)iptcTimeFormatter;
+ (id)iptcDateFormatter;
@property(retain, nonatomic) NSMutableDictionary *iptcMutableDictionary; // @synthesize iptcMutableDictionary=_iptcMutableDictionary;
@property(readonly, copy, nonatomic) NSDictionary *iptcDictionary;
- (void)setPeopleNames:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)_updateCreationDate;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (id)init;

@end

