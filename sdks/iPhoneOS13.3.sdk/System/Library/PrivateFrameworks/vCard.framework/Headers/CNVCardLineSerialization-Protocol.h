//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNVCardLine, NSArray, NSData, NSString;

@protocol CNVCardLineSerialization <NSObject>
- (void)insertLine:(CNVCardLine *)arg1 atMarker:(id)arg2;
- (NSUInteger)estimatedDataLength;
- (id)insertionMarker;
- (void)serializeData:(NSData *)arg1;
- (void)serializeArray:(NSArray *)arg1 withItemSeparator:(NSString *)arg2;
- (void)serializeString:(NSString *)arg1;
- (BOOL)canSerializeData:(NSData *)arg1;
- (BOOL)canSerializeArray:(NSArray *)arg1;
- (BOOL)canSerializeString:(NSString *)arg1;
- (void)serializeVersionPlaceholder;
- (void)serializeOpaqueValue:(NSData *)arg1;
- (void)serializeLine:(CNVCardLine *)arg1;
@end

