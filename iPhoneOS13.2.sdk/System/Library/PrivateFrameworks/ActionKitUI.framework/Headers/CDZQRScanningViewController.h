//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ActionKitUI/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CDZQRScanningViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>
{
    id /* block */ _resultBlock;
    id /* block */ _errorBlock;
    id /* block */ _cancelBlock;
    NSArray *_metadataObjectTypes;
    AVCaptureSession *_avSession;
    AVCaptureDevice *_captureDevice;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIButton *_torchButton;
    UILabel *_cameraUnavailableLabel;
    NSString *_lastCapturedString;
}

@property(copy, nonatomic) NSString *lastCapturedString; // @synthesize lastCapturedString=_lastCapturedString;
@property(nonatomic) __weak UILabel *cameraUnavailableLabel; // @synthesize cameraUnavailableLabel=_cameraUnavailableLabel;
@property(retain, nonatomic) UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) AVCaptureSession *avSession; // @synthesize avSession=_avSession;
@property(retain, nonatomic) NSArray *metadataObjectTypes; // @synthesize metadataObjectTypes=_metadataObjectTypes;
@property(copy, nonatomic) id /* block */ cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) id /* block */ errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) id /* block */ resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)turnTorchOff;
- (void)turnTorchOn;
- (void)handleFocusTap:(id)arg1;
- (void)toggleTorch:(id)arg1;
- (void)cancelItemSelected:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (id)initWithMetadataObjectTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

