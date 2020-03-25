//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString, NSURL, TSKDocumentRoot, TSUImage, TSUProgress, TSUProgressContext;
@protocol TSKImportExportDelegate;

@protocol TSKExporter <NSObject>
- (void)setProgressContext:(TSUProgressContext *)arg1;
- (TSUProgressContext *)progressContext;
- (BOOL)isCancelled;
- (void)quit;
- (void)cancel;
- (BOOL)exportToURL:(NSURL *)arg1 delegate:(id <TSKImportExportDelegate>)arg2 error:(id )arg3;
- (id)initWithDocumentRoot:(TSKDocumentRoot *)arg1;

@optional
- (BOOL)isExportSupported;
- (NSString *)documentSpecificTypeUTI;
- (NSString *)savePanelMessage;
- (void)setOptions:(NSDictionary *)arg1;
- (void)setSaveToURL:(NSURL *)arg1;
- (void)setTypeUTI:(NSString *)arg1;
- (NSString *)typeUTI;
- (NSString *)exportPathForOutputPath:(NSString *)arg1;
- (BOOL)needsSupplementalFiles;
- (TSUProgress *)progress;
- (void)setUsePackageFormat:(BOOL)arg1;
- (void)setQuickLookThumbnail:(TSUImage *)arg1;
- (void)setBuildVersionHistory:(NSArray *)arg1;
@end
