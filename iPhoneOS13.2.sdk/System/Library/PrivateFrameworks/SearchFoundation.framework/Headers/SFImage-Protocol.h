//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSString;

@protocol SFImage 
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int source;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *keyColor;
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) struct CGSize size;
@property(nonatomic) double scale;
@property(nonatomic) double cornerRadius;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) _Bool isTemplate;
@property(copy) NSData *imageData;
@end

