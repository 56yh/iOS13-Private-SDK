//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ASVInstanceTransform : NSObject
{
    CDStruct_14d5dc5e _baseTransform;
    CDStruct_14d5dc5e _transform;
    MISSING_TYPE *_localScale;
    MISSING_TYPE *_localTranslation;
    MISSING_TYPE *_recordedScale;
    MISSING_TYPE *_recordedTranslation;
}

@property(nonatomic) MISSING_TYPE *recordedTranslation; // @synthesize recordedTranslation=_recordedTranslation;
@property(nonatomic) MISSING_TYPE *recordedScale; // @synthesize recordedScale=_recordedScale;
- (void)doTransform;
- (id)init:(CDStruct_14d5dc5e)arg1;
@property(nonatomic) MISSING_TYPE *localTranslation;
@property(nonatomic) MISSING_TYPE *localScale;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform;

@end

