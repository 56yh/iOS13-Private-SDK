//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDDataValuesCollection, CHDFormula, EDResources;

__attribute__((visibility("hidden")))
@interface CHDData : NSObject
{
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned long long mContentFormatId;
    unsigned long long mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;
- (id)description;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (_Bool)isEmpty;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)setFormula:(id)arg1 chart:(id)arg2;
- (id)formula;
- (unsigned long long)averageDataPointDecimalCount;
- (struct CGPoint)minMaxValues;
- (void)setDataValueIndexCount:(unsigned long long)arg1;
- (unsigned long long)dataValueIndexCount;
- (id)dataValues;
- (id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;

@end

