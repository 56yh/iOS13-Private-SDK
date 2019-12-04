//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;

@interface AKStatistics : NSObject
{
    NSString *_documentType;
    NSString *_clientPrefix;
    NSCountedSet *_annotationsCounts;
}

+ (id)nameForAnnotation:(id)arg1;
+ (id)nameForClassName:(id)arg1;
@property(retain, nonatomic) NSCountedSet *annotationsCounts; // @synthesize annotationsCounts=_annotationsCounts;
@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
- (void)logDocumentSaved;
- (void)logShapeDetectionHUDPickedShape:(id)arg1;
- (void)logShapeDetectionHUDShown;
- (void)logInkAnnotationStrokeAdded:(id)arg1;
- (void)logAnnotationAdded:(id)arg1;
- (void)resetLogging;

@end

