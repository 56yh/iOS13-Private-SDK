//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDictionary, NSString, TSKDocumentRoot;

@protocol TSKCompatibilityDelegate 
- (NSString *)nestedDocumentFilename;
- (NSString *)needNewerVersionIndexXmlContentString;
- (NSString *)indexXmlFilename;
- (_Bool)isTextOnlyType:(NSString *)arg1;
- (_Bool)isSageDocumentType:(NSString *)arg1;
- (_Bool)isTCMessageExceptionErrorDomain:(NSString *)arg1;
- (NSArray *)exportableTypes;
- (Class)exportOptionsControllerClass;
- (Class)exporterClassForType:(NSString *)arg1 options:(NSDictionary *)arg2;
- (Class)importerClassForType:(NSString *)arg1 path:(NSString *)arg2;

@optional
- (NSString *)unsupportedExportMessageStringForType:(NSString *)arg1;
- (NSString *)backwardsCompatibleTypeForType:(NSString *)arg1;
- (_Bool)isExportSupportedForType:(NSString *)arg1 exporterOptions:(NSDictionary *)arg2 documentRoot:(TSKDocumentRoot *)arg3;
@end

