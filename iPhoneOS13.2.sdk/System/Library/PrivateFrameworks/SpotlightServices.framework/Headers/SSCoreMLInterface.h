//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject
{
    MLModelAsset *asset;
    MLModel *model;
}

- (id)getDescription;
- (id)getVersionString;
- (float)predict:(id)arg1 error:(id *)arg2;
- (id)initSpecificModel:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

