//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class HKCDADocumentSample, HKCDAPDFGenerator, HKHealthStore, NSData, NSURL;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider
{
    HKCDADocumentSample *_documentSample;
    HKHealthStore *_healthStore;
    NSData *_shareData;
    HKCDAPDFGenerator *_generator;
    NSURL *_exportArchiveURL;
}

@property(readonly, nonatomic) NSURL *exportArchiveURL; // @synthesize exportArchiveURL=_exportArchiveURL;
@property(readonly, nonatomic) HKCDAPDFGenerator *generator; // @synthesize generator=_generator;
@property(readonly, nonatomic) NSData *shareData; // @synthesize shareData=_shareData;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKCDADocumentSample *documentSample; // @synthesize documentSample=_documentSample;
- (id)item;
- (void)_loadShareDataWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_generatePDFforCDA:(id)arg1 completion:(id /* block */)arg2;
- (void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(id /* block */)arg3;
- (id)_simpleError:(id)arg1;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (void)dealloc;
- (id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2;

@end

