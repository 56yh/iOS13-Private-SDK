//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSCharacterSet, NSLocale;

@protocol CHRecognizing 
@property(nonatomic) _Bool shouldEnableCachingIfAvailable;
@property(nonatomic) struct CGSize minimumDrawingSize;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property(nonatomic) unsigned long long maxRecognitionResultCount;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(nonatomic) int contentType;
@property(readonly, nonatomic) int recognitionMode;
- (id)initWithMode:(int)arg1 locale:(NSLocale *)arg2;
@end

