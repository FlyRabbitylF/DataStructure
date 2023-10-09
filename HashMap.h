typedef struct
{
	int key;
	int value;
	struct HashNode* next;
}HashNode;

//����/ֵ����ӵ� hashMap ��
void hashMap_Put(HashNode* node, int key, int value);
//��ȡָ�� key ��Ӧ�� value
int hashMap_Get(HashNode* node, int key);
//ɾ�� hashMap ��ָ���� key ��ӳ���ϵ
void hashMap_Remove(HashNode* node, int key);
//��� hashMap ���Ƿ����ָ���� key ��Ӧ��ӳ���ϵ��
int hashMap_ContainsKey(HashNode* node, int key);
//��� hashMap ���Ƿ����ָ���� value ��Ӧ��ӳ���ϵ��
int hashMap_ContainsValue(HashNode* node, int value);
//���� hashMap �м�/ֵ�Ե�����
int hashMap_MapSize(HashNode* node);