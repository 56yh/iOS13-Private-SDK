//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassFaceTemplate : NSObject
{
    double _barcodeBottomInset;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_bucketTemplates;
    struct CGSize _barcodeMaxSize;
}

@property(retain, nonatomic) NSMutableArray *bucketTemplates; // @synthesize bucketTemplates=_bucketTemplates;
@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;
@property(nonatomic) struct CGSize barcodeMaxSize; // @synthesize barcodeMaxSize=_barcodeMaxSize;
@property(nonatomic) double barcodeBottomInset; // @synthesize barcodeBottomInset=_barcodeBottomInset;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;
- (void)addBucketTemplate:(id)arg1;

@end

