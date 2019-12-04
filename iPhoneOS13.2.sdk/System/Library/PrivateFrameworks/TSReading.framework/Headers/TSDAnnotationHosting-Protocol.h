//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


#import <TSReading/TSKAnnotation-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSKCommand;
@protocol TSKModel;

@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>
@property(nonatomic) id <TSKModel> model;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (void)commitText:(NSString *)arg1;
- (_Bool)isEqual:(id)arg1;

@optional
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly, nonatomic) NSString *changeTrackingString;
- (TSKCommand *)commandForDeletingComment;
@end

