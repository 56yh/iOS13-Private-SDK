//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHDataFormatter-Protocol.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject-Protocol.h>

@class NSString, NSUUID, TSUCustomFormat;

__attribute__((visibility("hidden")))
@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject>
{
    TSUCustomFormat *mCustomFormat;
    NSUUID *mCustomFormatListKey;
    int mFormatType;
}

+ (id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3;
@property(readonly, nonatomic) TSUCustomFormat *customFormat; // @synthesize customFormat=mCustomFormat;
- (long long)numberOfDecimalPlaces;
- (int)formatType;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)convertToPersistableStyleObject;
- (_Bool)isCompatibleWithDataFormatter:(id)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)p_stringForValue:(id)arg1 locale:(id)arg2;
- (void)dealloc;
- (id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

