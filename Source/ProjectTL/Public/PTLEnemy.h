// Fill out your copyright notice in the Description page of Project Settings.

/*=========================================================================*
 * �� Ŭ�����Դϴ�.
 *=========================================================================*/

#pragma once

#include "ProjectTL.h"
#include "PTLCharacterBase.h"
#include "PTLEnemy.generated.h"

UCLASS()
class PROJECTTL_API APTLEnemy : public APTLCharacterBase
{
	GENERATED_BODY()
	
public:
	APTLEnemy();

protected:
	virtual void Tick(float DeltaTime) override;

#pragma region Target

protected:
	UPROPERTY(VisibleInstanceOnly, BluePrintReadOnly, Category = Target, meta = (AllowPrivateAccess = "true"))
	class UPTLTargetComponent* TargetComponent;

	// Get�Լ� FORCEINLINE ��ũ�η� Inline�Լ��� �ۼ�
public:
	// TargetComponent Get�Լ�
	UFUNCTION(BlueprintCallable, Category = "Target")			// �ӽ÷� ����ϴ� ��������Ʈ �Լ� ����
	FORCEINLINE class UPTLTargetComponent* GetTargetComponent() const
	{
		return TargetComponent;
	}
	
#pragma endregion

#pragma region TextRender

protected:
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = TextRender, meta = (AllowPrivateAccess = "true"))
	class UTextRenderComponent* ActorNameText;

protected:
	void PrintText();

#pragma endregion

public:
	void IsDead();
};