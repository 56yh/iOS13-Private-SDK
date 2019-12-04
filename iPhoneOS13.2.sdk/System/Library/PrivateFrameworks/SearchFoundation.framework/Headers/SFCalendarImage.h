//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFImage.h>



#import <SearchFoundation/SFCalendarImage-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SFCalendarImage : SFImage <SFCalendarImage, NSSecureCoding, NSCopying>
{
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) _Bool isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end

